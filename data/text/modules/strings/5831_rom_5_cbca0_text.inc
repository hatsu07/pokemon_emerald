	@ src/strings.c:607 gJPText_WhatIsTheQuizAnswer (+1 aliases)
	.globl gJPText_WhatIsTheQuizAnswer
gJPText_WhatIsTheQuizAnswer: @ 0x085CBCA0
	.string "クイズの こたえは？{EOS}"
	.if (. - gJPText_WhatIsTheQuizAnswer) > 0xb
	.error "gJPText_WhatIsTheQuizAnswer may not grow beyond its original slot"
	.endif
	.if (. - gJPText_WhatIsTheQuizAnswer) < 0xb
	.space 0xb - (. - gJPText_WhatIsTheQuizAnswer)
	.endif
