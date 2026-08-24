	@ src/battle_message.c:1458 gText_WhatWillPkmnDo2
	.globl gText_WhatWillPkmnDo2
gText_WhatWillPkmnDo2: @ 0x085ABB4D
	.string "{B_PLAYER_NAME}は どうする？{EOS}"
	.if (. - gText_WhatWillPkmnDo2) > 0xa
	.error "gText_WhatWillPkmnDo2 may not grow beyond its original slot"
	.endif
	.if (. - gText_WhatWillPkmnDo2) < 0xa
	.space 0xa - (. - gText_WhatWillPkmnDo2)
	.endif

	@ src/battle_message.c:1459 gText_WhatWillWallyDo
	.globl gText_WhatWillWallyDo
gText_WhatWillWallyDo: @ 0x085ABB57
	.string "ミツルは どうする？{EOS}"
	.if (. - gText_WhatWillWallyDo) > 0xb
	.error "gText_WhatWillWallyDo may not grow beyond its original slot"
	.endif
	.if (. - gText_WhatWillWallyDo) < 0xb
	.space 0xb - (. - gText_WhatWillWallyDo)
	.endif

	@ src/battle_message.c:1460 gText_LinkStandby
	.globl gText_LinkStandby
gText_LinkStandby: @ 0x085ABB62
	.string "{PAUSE 16}つうしんたいきちゅう……{EOS}"
	.if (. - gText_LinkStandby) > 0x10
	.error "gText_LinkStandby may not grow beyond its original slot"
	.endif
	.if (. - gText_LinkStandby) < 0x10
	.space 0x10 - (. - gText_LinkStandby)
	.endif
