(defn euclides [a b]
  (if (zero? b)
    [1 0]
    (let [next (euclides b (mod a b))]
      (let [x (get next 0) y (get next 1)]
        [y (- x (* y (quot a b)))]))))