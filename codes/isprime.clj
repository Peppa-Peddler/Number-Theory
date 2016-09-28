(defn isprime? [value]
  (if (<= value 1)
    false
    ((fn [it]
       (cond
         (> (* it it) value) true
         (zero? (mod value it)) false
         :else (recur (inc it))))
     2)))