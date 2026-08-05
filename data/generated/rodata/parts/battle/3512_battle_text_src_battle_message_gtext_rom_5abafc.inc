	@ src/battle_message.c:1453 gText_PkmnIsEvolving
	.globl gText_Rom_5ABAFC
gText_Rom_5ABAFC: @ 0x085ABAFC
	.string "……おや！？\n{STR_VAR_1}の　ようすが……！$"
	.if (. - gText_Rom_5ABAFC) > 0x13
	.error "gText_Rom_5ABAFC may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5ABAFC) < 0x13
	.space 0x13 - (. - gText_Rom_5ABAFC)
	.endif
