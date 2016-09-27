(defn gcd [a b]
  (if (zero? b) a (recur b (rem a b))))
