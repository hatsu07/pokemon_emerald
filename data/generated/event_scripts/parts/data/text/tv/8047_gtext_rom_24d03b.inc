	@ data/text/tv.inc:1093 SlateportCity_PokemonFanClub_Text_DescribeFeelingsFirstMetMon
	.globl gText_Rom_24D03B
gText_Rom_24D03B: @ 0x0824D03B
	.string "きみが {STR_VAR_1}と\nであったときって\pなにか かんじた?\nどう おもったか おしえて!$"
	.if (. - gText_Rom_24D03B) > 0x2a
	.error "gText_Rom_24D03B may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_24D03B) < 0x2a
	.space 0x2a - (. - gText_Rom_24D03B)
	.endif
