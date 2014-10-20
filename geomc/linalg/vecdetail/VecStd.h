/* 
 * File:   VecStd.h
 * Author: tbabb
 *
 * Created on June 24, 2014, 2:43 AM
 */

#ifndef VECSTD_H
#define	VECSTD_H

namespace std {
    

/** @ingroup linalg
 * @{
 */ 

    
// these make vectors more interchangeable with bare types:
/**
 * Element-wise maximum.
 */
template <typename T, index_t N>
inline geom::Vec<T,N> max(const geom::Vec<T,N> &a, const geom::Vec<T,N> &b) {
    return a.max(b);
}

/**
 * Element-wise minimum.
 */
template <typename T, index_t N>
inline geom::Vec<T,N> min(const geom::Vec<T,N> &a, const geom::Vec<T,N> &b) {
    return a.min(b);
}

/**
 * Element-wise absolute value.
 */
template <typename T, index_t N>
inline geom::Vec<T,N> abs(const geom::Vec<T,N> &v) {
    return v.abs();
}

/**
 * Element-wise floor.
 */
template <typename T, index_t N>
inline geom::Vec<T,N> floor(const geom::Vec<T,N> &v) {
    return v.floor();
}

/**
 * Element-wise ceiling.
 */
template <typename T, index_t N>
inline geom::Vec<T,N> ceil(const geom::Vec<T,N> &v) {
    return v.ceil();
}

/**
 * Element-wise square root.
 */
template <typename T, index_t N>
inline geom::Vec<T,N> sqrt(const geom::Vec<T,N> &v) {
    geom::Vec<T,N> o;
    for (index_t i = 0; i < N; i++) { 
        o[i] = std::sqrt(v[i]); 
    }
    return o;
}

/**
 * Element-wise sine.
 */
template <typename T, index_t N>
inline geom::Vec<T,N> sin(const geom::Vec<T,N> &v) {
    geom::Vec<T,N> o;
    for (index_t i = 0; i < N; i++) { 
        o[i] = std::sin(v[i]); 
    }
    return o;
}

/**
 * Element-wise cosine.
 */
template <typename T, index_t N>
inline geom::Vec<T,N> cos(const geom::Vec<T,N> &v) {
    geom::Vec<T,N> o;
    for (index_t i = 0; i < N; i++) { 
        o[i] = std::cos(v[i]); 
    }
    return o;
}

/**
 * Element-wise tangent.
 */
template <typename T, index_t N>
inline geom::Vec<T,N> tan(const geom::Vec<T,N> &v) {
    geom::Vec<T,N> o;
    for (index_t i = 0; i < N; i++) { 
        o[i] = std::tan(v[i]); 
    }
    return o;
}

/**
 * Element-wise exponentiation (e<sup>v<sub>i</sub></sup>).
 */
template <typename T, index_t N>
inline geom::Vec<T,N> exp(const geom::Vec<T,N> &v) {
    geom::Vec<T,N> o;
    for (index_t i = 0; i < N; i++) { 
        o[i] = std::exp(v[i]); 
    }
    return o;
}

/**
 * Element-wise natural log.
 */
template <typename T, index_t N>
inline geom::Vec<T,N> log(const geom::Vec<T,N> &v) {
    geom::Vec<T,N> o;
    for (index_t i = 0; i < N; i++) { 
        o[i] = std::log(v[i]); 
    }
    return o;
}

/// @} //ingroup linalg

} // namespace std


#endif	/* VECSTD_H */

