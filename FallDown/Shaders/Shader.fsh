//
//  Shader.fsh
//  FallDown
//
//  Created by Arihant Jain on 11/10/12.
//  Copyright (c) 2012 AJcoder. All rights reserved.
//

varying lowp vec4 colorVarying;

void main()
{
    gl_FragColor = colorVarying;
}
