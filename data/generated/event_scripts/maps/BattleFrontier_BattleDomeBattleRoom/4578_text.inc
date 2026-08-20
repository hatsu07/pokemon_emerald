	@ data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.inc:1079 BattleFrontier_BattleDomeBattleRoom_Text_LetsSeeYourStrategy
	.globl gText_Rom_229973
gText_Rom_229973: @ 0x08229973
	.string "キミの せんりゃく! みせて ごらんっ!{EOS}"
	.if (. - gText_Rom_229973) > 0x15
	.error "gText_Rom_229973 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_229973) < 0x15
	.space 0x15 - (. - gText_Rom_229973)
	.endif
