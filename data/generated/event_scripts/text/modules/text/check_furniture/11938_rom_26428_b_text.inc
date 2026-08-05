	@ data/text/check_furniture.inc:7 Text_PokemonCenterBookShelf
	.globl gText_Rom_26428B
gText_Rom_26428B: @ 0x0826428B
	.string "ポケモンざっしが ならんでる!\p……「ポケモンのとも」\n……「ポケモン てちょう」\l……「かわいい ポケモン」$"
	.if (. - gText_Rom_26428B) > 0x38
	.error "gText_Rom_26428B may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_26428B) < 0x38
	.space 0x38 - (. - gText_Rom_26428B)
	.endif
