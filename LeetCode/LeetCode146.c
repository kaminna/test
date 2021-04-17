struct Entry {
	int key;
	int value;
	int priority;
};

typedef struct {
	struct Entry* entries;
	int capacity;
	int currentPriority;
} LRUCache;


LRUCache* lRUCacheCreate(int capacity) {
	LRUCache* obj = malloc(sizeof(LRUCache));
	obj->entries = calloc(capacity, sizeof(struct Entry));
	obj->capacity = capacity;
	obj->currentPriority = 0;
	for (int i = 0; i < capacity; i++) {
		obj->entries[i].key = -1;
	}
	return obj;
}

int lRUCacheGet(LRUCache* obj, int key) {
	for (int i = 0; i < obj->capacity; i++) {
		if (obj->entries[i].key == key) {
			obj->currentPriority++;
			obj->entries[i].priority = obj->currentPriority;
			return obj->entries[i].value;
		}
	}
	return -1;
}

void lRUCachePut(LRUCache* obj, int key, int value) {
	for (int i = 0; i < obj->capacity; i++) {
		if (obj->entries[i].key == key) {
			obj->entries[i].value = value;
			obj->currentPriority++;
			obj->entries[i].priority = obj->currentPriority;
			return;
		}
	}
	{
		for (int i = 0; i < obj->capacity; i++) {
			if (obj->entries[i].key == -1) {
				obj->entries[i].key = key;
				obj->entries[i].value = value;
				obj->currentPriority++;
				obj->entries[i].priority = obj->currentPriority;
				return;
			}
		}
		int minI = 0;
		for (int i = 0; i < obj->capacity; i++) {
			if (obj->entries[i].priority < obj->entries[minI].priority) {
				minI = i;
			}
		}
		obj->entries[minI].key = key;
		obj->entries[minI].value = value;
		obj->currentPriority++;
		obj->entries[minI].priority = obj->currentPriority;
	}
}

void lRUCacheFree(LRUCache* obj) {
	free(obj->entries);
	free(obj);
}

/**
 * Your LRUCache struct will be instantiated and called as such:
 * LRUCache* obj = lRUCacheCreate(capacity);
 * int param_1 = lRUCacheGet(obj, key);

 * lRUCachePut(obj, key, value);

 * lRUCacheFree(obj);
*/