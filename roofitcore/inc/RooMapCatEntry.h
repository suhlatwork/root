/*****************************************************************************
 * Project: BaBar detector at the SLAC PEP-II B-factory
 * Package: RooFitCore
 *    File: $Id: RooMapCatEntry.rdl,v 1.1 2001/05/10 00:16:08 verkerke Exp $
 * Authors:
 *   DK, David Kirkby, Stanford University, kirkby@hep.stanford.edu
 *   WV, Wouter Verkerke, UC Santa Barbara, verkerke@slac.stanford.edu
 * History:
 *   07-Mar-2001 WV Created initial version
 *
 * Copyright (C) 2001 University of California
 *****************************************************************************/
#ifndef ROO_MAP_CAT_ENTRY
#define ROO_MAP_CAT_ENTRY

#include <iostream.h>
#include "TNamed.h"
#include "TRegexp.h"
class RooCatType ;

class RooMapCatEntry : public TNamed {
public:
  inline RooMapCatEntry() : TNamed(), _regexp(""), _cat(0) {} 
  RooMapCatEntry(const char* exp, const RooCatType* cat) ;
  RooMapCatEntry(const RooMapCatEntry& other) ;
  virtual TObject* Clone(const char*) const { return new RooMapCatEntry(*this); }

  inline Bool_t ok() { return (_regexp.Status()==TRegexp::kOK) ; }
  Bool_t match(const char* testPattern) const ;
  inline const RooCatType* outCat() const { return _cat ; }

protected:

  TRegexp _regexp ;
  RooCatType* _cat ;
	
  ClassDef(RooMapCatEntry,1) // Utility class, holding a map expression from a index label regexp to a RooCatType
} ;


#endif
