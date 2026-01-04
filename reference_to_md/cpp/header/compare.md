* header
  * part of the [language support](../utility.md) library

## Contents

  * [1 Concepts](compare.html#Concepts)
  * [2 Classes](compare.html#Classes)
  * [3 Customization point objects](compare.html#Customization_point_objects)
  * [4 Functions](compare.html#Functions)
  * [5 Synopsis](compare.html#Synopsis)
    * [5.1 Concept three_way_comparable](compare.html#Concept_three_way_comparable)
    * [5.2 Concept three_way_comparable_with](compare.html#Concept_three_way_comparable_with)
    * [5.3 Class std::partial_ordering](compare.html#Class_std::partial_ordering)
    * [5.4 Class std::weak_ordering](compare.html#Class_std::weak_ordering)
    * [5.5 Class std::strong_ordering](compare.html#Class_std::strong_ordering)
    * [5.6 Class std::compare_three_way](compare.html#Class_std::compare_three_way)
  * [6 See also](compare.html#See_also)

###  Concepts  
  
[ three_way_comparablethree_way_comparable_with](../utility/compare/three_way_comparable.html "cpp/utility/compare/three way comparable")(C++20) |  specifies that operator <=> produces consistent result on given types   
(concept)  
  
###  Classes  
  
[ partial_ordering](../utility/compare/partial_ordering.html "cpp/utility/compare/partial ordering")(C++20) |  the result type of 3-way comparison that supports all 6 operators, is not substitutable, and allows incomparable values   
(class)  
[ weak_ordering](../utility/compare/weak_ordering.html "cpp/utility/compare/weak ordering")(C++20) |  the result type of 3-way comparison that supports all 6 operators and is not substitutable   
(class)  
[ strong_ordering](../utility/compare/strong_ordering.html "cpp/utility/compare/strong ordering")(C++20) |  the result type of 3-way comparison that supports all 6 operators and is substitutable   
(class)  
[ common_comparison_category](../utility/compare/common_comparison_category.html "cpp/utility/compare/common comparison category")(C++20) |  the strongest comparison category to which all of the given types can be converted   
(class template)  
[ compare_three_way_result](../utility/compare/compare_three_way_result.html "cpp/utility/compare/compare three way result")(C++20) |  obtains the result type of the three-way comparison operator <=> on given types   
(class template)  
[ compare_three_way](../utility/compare/compare_three_way.html "cpp/utility/compare/compare three way")(C++20) |  constrained function object implementing x <=> y   
(class)  
  
###  Customization point objects  
  
[ strong_order](../utility/compare/strong_order.html "cpp/utility/compare/strong order")(C++20) |  performs 3-way comparison and produces a result of type `std::strong_ordering`  
(customization point object)  
[ weak_order](../utility/compare/weak_order.html "cpp/utility/compare/weak order")(C++20) |  performs 3-way comparison and produces a result of type `std::weak_ordering`  
(customization point object)  
[ partial_order](../utility/compare/partial_order.html "cpp/utility/compare/partial order")(C++20) |  performs 3-way comparison and produces a result of type `std::partial_ordering`  
(customization point object)  
[ compare_strong_order_fallback](../utility/compare/compare_strong_order_fallback.html "cpp/utility/compare/compare strong order fallback")(C++20) |  performs 3-way comparison and produces a result of type `std::strong_ordering`, even if operator<=> is unavailable  
(customization point object)  
[ compare_weak_order_fallback](../utility/compare/compare_weak_order_fallback.html "cpp/utility/compare/compare weak order fallback")(C++20) |  performs 3-way comparison and produces a result of type `std::weak_ordering`, even if operator<=> is unavailable  
(customization point object)  
[ compare_partial_order_fallback](../utility/compare/compare_partial_order_fallback.html "cpp/utility/compare/compare partial order fallback")(C++20) |  performs 3-way comparison and produces a result of type `std::partial_ordering`, even if operator<=> is unavailable  
(customization point object)  
  
###  Functions  
  
[ is_eqis_neqis_ltis_lteqis_gtis_gteq](../utility/compare/named_comparison_functions.html "cpp/utility/compare/named comparison functions")(C++20) |  named comparison functions   
(function)  
  
### Synopsis
    
```c++
    namespace std {
      // comparison category types
      class partial_ordering;
      class weak_ordering;
      class strong_ordering;

      // named comparison functions
      constexpr bool is_eq  (partial_ordering cmp) noexcept { return cmp == 0; }
      constexpr bool is_neq (partial_ordering cmp) noexcept { return cmp != 0; }
      constexpr bool is_lt  (partial_ordering cmp) noexcept { return cmp < 0; }
      constexpr bool is_lteq(partial_ordering cmp) noexcept { return cmp <= 0; }
      constexpr bool is_gt  (partial_ordering cmp) noexcept { return cmp > 0; }
      constexpr bool is_gteq(partial_ordering cmp) noexcept { return cmp >= 0; }

      // common comparison category type
      template<class... Ts>
      struct common_comparison_category {
        using type = /* see description */;
      };
      template<class... Ts>
        using common_comparison_category_t = typename common_comparison_category<Ts...>::type;

      // concept three_way_comparable
      template<class T, class Cat = partial_ordering>
        concept three_way_comparable = /* see description */;
      template<class T, class U, class Cat = partial_ordering>
        concept three_way_comparable_with = /* see description */;

      // result of three-way comparison
      template<class T, class U = T> struct compare_three_way_result;

      template<class T, class U = T>
        using compare_three_way_result_t = typename compare_three_way_result<T, U>::type;

      // class compare_three_way
      struct compare_three_way;

      // comparison algorithms
      inline namespace /* unspecified */ {
        inline constexpr /* unspecified */ strong_order = /* unspecified */;
        inline constexpr /* unspecified */ weak_order = /* unspecified */;
        inline constexpr /* unspecified */ partial_order = /* unspecified */;
        inline constexpr /* unspecified */ compare_strong_order_fallback = /* unspecified */;
        inline constexpr /* unspecified */ compare_weak_order_fallback = /* unspecified */;
        inline constexpr /* unspecified */ compare_partial_order_fallback = /* unspecified */;
      }
    }
```    


#### Concept [`three_way_comparable`](../utility/compare/three_way_comparable.html "cpp/utility/compare/three way comparable")
    
    
    namespace std {
      template<class T, class Cat>
        concept __ComparesAs =                // exposition only
          same_as<common_comparison_category_t<T, Cat>, Cat>;

      template<class T, class U>
        concept __PartiallyOrderedWith =      // exposition only
          requires(const remove_reference_t<T>& t, const remove_reference_t<U>& u) {
            { t <  u } -> [boolean-testable](../concepts/boolean-testable.html);
            { t >  u } -> [boolean-testable](../concepts/boolean-testable.html);
            { t <= u } -> [boolean-testable](../concepts/boolean-testable.html);
            { t >= u } -> [boolean-testable](../concepts/boolean-testable.html);
            { u <  t } -> [boolean-testable](../concepts/boolean-testable.html);
            { u >  t } -> [boolean-testable](../concepts/boolean-testable.html);
            { u <= t } -> [boolean-testable](../concepts/boolean-testable.html);
            { u >= t } -> [boolean-testable](../concepts/boolean-testable.html);
          };

      template<class T, class Cat = partial_ordering>
        concept three_way_comparable =
          __WeaklyEqualityComparableWith<T, T> &&
          __PartiallyOrderedWith<T, T> &&
          requires(const remove_reference_t<T>& a, const remove_reference_t<T>& b) {
            { a <=> b } -> __ComparesAs<Cat>;
          };
    }

#### Concept [`three_way_comparable_with`](../utility/compare/three_way_comparable.html "cpp/utility/compare/three way comparable")
    
    
    namespace std {
      template<class T, class U, class Cat = partial_ordering>
        concept three_way_comparable_with =
          __WeaklyEqualityComparableWith<T, U> &&
          __PartiallyOrderedWith<T, U> &&
          three_way_comparable<T, Cat> &&
          three_way_comparable<U, Cat> &&
          common_reference_with<const remove_reference_t<T>&, const remove_reference_t<U>&> &&
          three_way_comparable<
            common_reference_t<
              const remove_reference_t<T>&, const remove_reference_t<U>&>, Cat> &&
          requires(const remove_reference_t<T>& t, const remove_reference_t<U>& u) {
            { t <=> u } -> __ComparesAs<Cat>;
            { u <=> t } -> __ComparesAs<Cat>;
          };
    }

#### Class [std::partial_ordering](../utility/compare/partial_ordering.html)
    
    
    namespace std {
      class partial_ordering {
        int value;          // exposition only
        bool is_ordered;    // exposition only

        // exposition-only constructors
        constexpr explicit
          partial_ordering(eq v) noexcept :
            value(int(v)), is_ordered(true) {}      // exposition only
        constexpr explicit
          partial_ordering(ord v) noexcept :
            value(int(v)), is_ordered(true) {}     // exposition only
        constexpr explicit
          partial_ordering(ncmp v) noexcept :
            value(int(v)), is_ordered(false) {}   // exposition only

      public:
        // valid values
        static const partial_ordering less;
        static const partial_ordering equivalent;
        static const partial_ordering greater;
        static const partial_ordering unordered;

        // comparisons
        friend constexpr bool operator==(partial_ordering v, /* unspecified */) noexcept;
        friend constexpr bool
          operator==(partial_ordering v, partial_ordering w) noexcept = default;
        friend constexpr bool operator< (partial_ordering v, /* unspecified */) noexcept;
        friend constexpr bool operator> (partial_ordering v, /* unspecified */) noexcept;
        friend constexpr bool operator<=(partial_ordering v, /* unspecified */) noexcept;
        friend constexpr bool operator>=(partial_ordering v, /* unspecified */) noexcept;
        friend constexpr bool operator< (/* unspecified */, partial_ordering v) noexcept;
        friend constexpr bool operator> (/* unspecified */, partial_ordering v) noexcept;
        friend constexpr bool operator<=(/* unspecified */, partial_ordering v) noexcept;
        friend constexpr bool operator>=(/* unspecified */, partial_ordering v) noexcept;
        friend constexpr partial_ordering
          operator<=>(partial_ordering v, /* unspecified */) noexcept;
        friend constexpr partial_ordering
          operator<=>(/* unspecified */, partial_ordering v) noexcept;
      };

      // valid values' definitions
      inline constexpr partial_ordering partial_ordering::less(ord::less);
      inline constexpr partial_ordering partial_ordering::equivalent(eq::equivalent);
      inline constexpr partial_ordering partial_ordering::greater(ord::greater);
      inline constexpr partial_ordering partial_ordering::unordered(ncmp::unordered);
    }

#### Class [std::weak_ordering](../utility/compare/weak_ordering.html)
    
    
    namespace std {
      class weak_ordering {
        int value;  // exposition only

        // exposition-only constructors
        constexpr explicit weak_ordering(eq v) noexcept : value(int(v)) {}  // exposition only
        constexpr explicit weak_ordering(ord v) noexcept : value(int(v)) {} // exposition only

      public:
        // valid values
        static const weak_ordering less;
        static const weak_ordering equivalent;
        static const weak_ordering greater;

        // conversions
        constexpr operator partial_ordering() const noexcept;

        // comparisons
        friend constexpr bool operator==(weak_ordering v, /* unspecified */) noexcept;
        friend constexpr bool operator==(weak_ordering v, weak_ordering w) noexcept = default;
        friend constexpr bool operator< (weak_ordering v, /* unspecified */) noexcept;
        friend constexpr bool operator> (weak_ordering v, /* unspecified */) noexcept;
        friend constexpr bool operator<=(weak_ordering v, /* unspecified */) noexcept;
        friend constexpr bool operator>=(weak_ordering v, /* unspecified */) noexcept;
        friend constexpr bool operator< (/* unspecified */, weak_ordering v) noexcept;
        friend constexpr bool operator> (/* unspecified */, weak_ordering v) noexcept;
        friend constexpr bool operator<=(/* unspecified */, weak_ordering v) noexcept;
        friend constexpr bool operator>=(/* unspecified */, weak_ordering v) noexcept;
        friend constexpr weak_ordering
          operator<=>(weak_ordering v, /* unspecified */) noexcept;
        friend constexpr weak_ordering
          operator<=>(/* unspecified */, weak_ordering v) noexcept;
      };

      // valid values' definitions
      inline constexpr weak_ordering weak_ordering::less(ord::less);
      inline constexpr weak_ordering weak_ordering::equivalent(eq::equivalent);
      inline constexpr weak_ordering weak_ordering::greater(ord::greater);
    }

#### Class [std::strong_ordering](../utility/compare/strong_ordering.html)
    
    
    namespace std {
      class strong_ordering {
        int value;  // exposition only

        // exposition-only constructors
        constexpr explicit strong_ordering(eq v) noexcept :
          value(int(v)) {}    // exposition only
        constexpr explicit strong_ordering(ord v) noexcept :
          value(int(v)) {}   // exposition only

      public:
        // valid values
        static const strong_ordering less;
        static const strong_ordering equal;
        static const strong_ordering equivalent;
        static const strong_ordering greater;

        // conversions
        constexpr operator partial_ordering() const noexcept;
        constexpr operator weak_ordering() const noexcept;

        // comparisons
        friend constexpr bool operator==(strong_ordering v, /* unspecified */) noexcept;
        friend constexpr bool
          operator==(strong_ordering v, strong_ordering w) noexcept = default;
        friend constexpr bool operator< (strong_ordering v, /* unspecified */) noexcept;
        friend constexpr bool operator> (strong_ordering v, /* unspecified */) noexcept;
        friend constexpr bool operator<=(strong_ordering v, /* unspecified */) noexcept;
        friend constexpr bool operator>=(strong_ordering v, /* unspecified */) noexcept;
        friend constexpr bool operator< (/* unspecified */, strong_ordering v) noexcept;
        friend constexpr bool operator> (/* unspecified */, strong_ordering v) noexcept;
        friend constexpr bool operator<=(/* unspecified */, strong_ordering v) noexcept;
        friend constexpr bool operator>=(/* unspecified */, strong_ordering v) noexcept;
        friend constexpr strong_ordering
          operator<=>(strong_ordering v, /* unspecified */) noexcept;
        friend constexpr strong_ordering
        operator<=>(/* unspecified */, strong_ordering v) noexcept;
      };

      // valid values' definitions
      inline constexpr strong_ordering strong_ordering::less(ord::less);
      inline constexpr strong_ordering strong_ordering::equal(eq::equal);
      inline constexpr strong_ordering strong_ordering::equivalent(eq::equivalent);
      inline constexpr strong_ordering strong_ordering::greater(ord::greater);
    }

#### Class [std::compare_three_way](../utility/compare/compare_three_way.html)
    
    
    namespace std {
      struct compare_three_way {
        template<class T, class U>
        constexpr auto operator()(T&& t, U&& u) const;

        using is_transparent = /* unspecified */;
      };
    }

### See also

[**three-way comparison operator**](../language/operator_comparison.html#Three-way_comparison "cpp/language/operator comparison") expression _lhs_ `**< =>**` _rhs_ (C++20)  
---
