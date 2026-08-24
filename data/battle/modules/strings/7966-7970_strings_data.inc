	.globl gText_MoveInterfaceType

	@ src/battle_message.c:1465 gText_MoveInterfaceType (+2 aliases)
	.globl gText_MoveInterfaceType
gText_MoveInterfaceType: @ 0x085F7C5F
	.string "タイプ/{EOS}"
	.if (. - gText_MoveInterfaceType) > 0x5
	.error "gText_MoveInterfaceType may not grow beyond its original slot"
	.endif
	.if (. - gText_MoveInterfaceType) < 0x5
	.space 0x5 - (. - gText_MoveInterfaceType)
	.endif
	.globl gText_MoveRelearnerPP

	@ src/strings.c:1135 gText_MoveRelearnerPP
	.globl gText_MoveRelearnerPP
gText_MoveRelearnerPP: @ 0x085F7C64
	.string "PP/{EOS}"
	.if (. - gText_MoveRelearnerPP) > 0x4
	.error "gText_MoveRelearnerPP may not grow beyond its original slot"
	.endif
	.if (. - gText_MoveRelearnerPP) < 0x4
	.space 0x4 - (. - gText_MoveRelearnerPP)
	.endif

	@ src/strings.c:1136 gText_MoveRelearnerPower
	.globl gText_MoveRelearnerPower
gText_MoveRelearnerPower: @ 0x085F7C68
	.string "いりょく/{EOS}"
	.if (. - gText_MoveRelearnerPower) > 0x6
	.error "gText_MoveRelearnerPower may not grow beyond its original slot"
	.endif
	.if (. - gText_MoveRelearnerPower) < 0x6
	.space 0x6 - (. - gText_MoveRelearnerPower)
	.endif

	@ src/strings.c:1137 gText_MoveRelearnerAccuracy
	.globl gText_MoveRelearnerAccuracy
gText_MoveRelearnerAccuracy: @ 0x085F7C6E
	.string "めいちゅう/{EOS}"
	.if (. - gText_MoveRelearnerAccuracy) > 0x7
	.error "gText_MoveRelearnerAccuracy may not grow beyond its original slot"
	.endif
	.if (. - gText_MoveRelearnerAccuracy) < 0x7
	.space 0x7 - (. - gText_MoveRelearnerAccuracy)
	.endif
