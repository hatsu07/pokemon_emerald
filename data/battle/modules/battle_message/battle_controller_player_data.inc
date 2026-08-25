	@ pret/pokeemerald-jp direct xref for 0x085ABB43: battle_controller_player.s: PlayerHandleChooseAction
	.globl gBattleControllerPlayerData_085ABB43
gBattleControllerPlayerData_085ABB43: @ 0x085ABB43
	@ analyzed canonical ROM range 0x085ABB43-0x085ABB4C
	@ structured u16 table (semantic role inferred only to scalar width)
	@ ANALYSIS: U16_TABLE size=0xA entries=5
	.2byte 0x12FD, 0x001A, 0x0345, 0x290D, 0xFFAC
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
