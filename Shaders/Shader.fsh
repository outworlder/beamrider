//
//  Shader.fsh
//  Untitled
//
//  Created by Stephen Eilert on 4/30/10.
//  Copyright __MyCompanyName__ 2010. All rights reserved.
//

varying lowp vec4 colorVarying;

void main()
{
	gl_FragColor = colorVarying;
}
