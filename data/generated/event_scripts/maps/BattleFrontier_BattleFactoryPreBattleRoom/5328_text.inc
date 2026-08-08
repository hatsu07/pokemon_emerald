	@ data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.inc:461 BattleFrontier_BattleFactoryPreBattleRoom_Text_LetUsRestoreMons
	.globl gText_Rom_2323F8
gText_Rom_2323F8: @ 0x082323F8
	.string "おつかれさま です!\nポケモンを かいふく しましょう!"
	.byte EOS
	.if (. - gText_Rom_2323F8) > 0x1d
	.error "gText_Rom_2323F8 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2323F8) < 0x1d
	.space 0x1d - (. - gText_Rom_2323F8)
	.endif
