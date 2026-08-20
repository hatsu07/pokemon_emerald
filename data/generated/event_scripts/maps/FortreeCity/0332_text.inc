	@ data/maps/FortreeCity/scripts.inc:123 FortreeCity_Text_BugPokemonComeThroughWindow
	.globl gText_Rom_1E0049
gText_Rom_1E0049: @ 0x081E0049
	.string "きのうえで くらすのは いいんだけど\pときどき まどの そとから\nむしポケモンが はいって きたりして\lびっくり しちゃうんだよね{EOS}"
	.if (. - gText_Rom_1E0049) > 0x42
	.error "gText_Rom_1E0049 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1E0049) < 0x42
	.space 0x42 - (. - gText_Rom_1E0049)
	.endif
