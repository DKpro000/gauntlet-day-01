#pragma once

class EnemySpawner {
public:
    EnemySpawner(int maxCount);
    int spawn();
    int getSpawned() const;
    int spawnedCount() const;
private:
    int m_count;
    int m_spawned;
};