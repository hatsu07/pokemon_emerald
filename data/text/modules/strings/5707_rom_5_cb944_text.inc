	@ src/strings.c:556 gText_WhatYouSayIfYouLose
	.globl gText_WhatYouSayIfYouLose
gText_WhatYouSayIfYouLose: @ 0x085CB944
	.string "たいせんに まけたときの あいさつは{EOS}"
	.if (. - gText_WhatYouSayIfYouLose) > 0x13
	.error "gText_WhatYouSayIfYouLose may not grow beyond its original slot"
	.endif
	.if (. - gText_WhatYouSayIfYouLose) < 0x13
	.space 0x13 - (. - gText_WhatYouSayIfYouLose)
	.endif
