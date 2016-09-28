(defn exp [a n p]
  (if (zero? n)
    1
    (let [half (exp a (quot n 2) p)]
      (if (even? n)
        (mod (* half half) p)
        (mod (* a (mod (* half half) p)) p)))))