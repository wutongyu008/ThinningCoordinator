//
//  CollectionViewDataSource.h
//  ThinningCoordinator
//
//  Created by Moch Xiao on 1/21/16.
//  Copyright © 2016 Moch. All rights reserved.
//

#import "TCDataSource.h"

@interface CollectionViewDataSource : TCDataSource<
    TCDataSourceable,
    TCCollectionSupplementaryViewibility,
    TCTableViewCollectionViewMovable
>

@end
