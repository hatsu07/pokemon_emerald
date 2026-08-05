	@ data/maps/RustboroCity/scripts.inc:1062 RustboroCity_Text_WowYouHavePokemon
	.globl gText_Rom_1DF498
gText_Rom_1DF498: @ 0x081DF498
	.string "あなたも ポケモンを つれてるのね\pあたしも おおきくなったら\nポケモンと どこかに いくんだ!$"
	.if (. - gText_Rom_1DF498) > 0x31
	.error "gText_Rom_1DF498 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1DF498) < 0x31
	.space 0x31 - (. - gText_Rom_1DF498)
	.endif
