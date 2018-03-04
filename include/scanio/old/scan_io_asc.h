/**
 * @file
 * @brief IO of 3D scans in ASC file format
 * @author Kai Lingemann. Institute of Computer Science, University of Osnabrueck, Germany.
 * @author Andreas Nuechter. Institute of Computer Science, University of Osnabrueck, Germany.
 */

#ifndef __SCAN_IO_ASC_H__
#define __SCAN_IO_ASC_H__

#include <string>
#include <vector>

#include "scan_io.h"

/**
 * @brief 3D scan loader for ASC file format (Riegl scans)
 *
 * The compiled class is available as shared object file
 */
class ScanIO_asc : public ScanIO {
public:
  virtual int readScans(int start, int end, string &dir, int maxDist, int mindist,
				    double *euler, vector<Point> &ptss);
};

// Since this shared object file is  loaded on the fly, we
// need class factories

// the types of the class factories
typedef ScanIO* create_sio();
typedef void destroy_sio(ScanIO*);

#endif
