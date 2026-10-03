priority_queue<Car> pq;
    for(int i=0; i<cars.size(); i++) { //O(nlogn)
        pq.push(cars[i]);
    }