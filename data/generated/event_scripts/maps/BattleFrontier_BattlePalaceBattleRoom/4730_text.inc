	@ data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.inc:533 BattleFrontier_BattlePalaceBattleRoom_Text_SpenserAwaitNextTime
	.globl gText_Rom_22BB1E
gText_Rom_22BB1E: @ 0x0822BB1E
	.string "ウコン『おまえの ポケモンたちは\nまことに すんだ ひとみを しとる!\pつぎの きかいを たのしみに しとるぞ!{EOS}"
	.if (. - gText_Rom_22BB1E) > 0x39
	.error "gText_Rom_22BB1E may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_22BB1E) < 0x39
	.space 0x39 - (. - gText_Rom_22BB1E)
	.endif
