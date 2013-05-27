// -*- tab-width: 4; indent-tabs-mode: nil; c-basic-offset: 2 -*-
// vi: set et ts=4 sw=2 sts=2:
#ifndef DUNE_PDELAB_COMMON_EXCEPTIONS_HH
#define DUNE_PDELAB_COMMON_EXCEPTIONS_HH

#include <dune/common/exceptions.hh>

/**
 * \file
 * \brief PDELab-specific exceptions.
 */

namespace Dune {
  namespace PDELab {

    //! Base class for all PDELab exceptions.
    class Exception
      : public Dune::Exception
    {};


    //! Ordering-related error.
    class OrderingError
      : public Exception
    {};

    //! Error related to the logical structure of an Ordering.
    class OrderingStructureError
      : public OrderingError
    {};

  } // namespace PDELab
} // namespace Dune

#endif // DUNE_PDELAB_COMMON_EXCEPTIONS_HH
