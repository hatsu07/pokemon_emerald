	@ src/strings.c:555 gText_WhatYouSayIfYouWin
	.globl gText_WhatYouSayIfYouWin
gText_WhatYouSayIfYouWin: @ 0x085CB931
	.string "たいせんに かったときの あいさつは{EOS}"
	.if (. - gText_WhatYouSayIfYouWin) > 0x13
	.error "gText_WhatYouSayIfYouWin may not grow beyond its original slot"
	.endif
	.if (. - gText_WhatYouSayIfYouWin) < 0x13
	.space 0x13 - (. - gText_WhatYouSayIfYouWin)
	.endif
