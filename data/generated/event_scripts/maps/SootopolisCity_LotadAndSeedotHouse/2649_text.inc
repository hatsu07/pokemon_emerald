	@ data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.inc:106 SootopolisCity_LotadAndSeedotHouse_Text_PleaseShowMeBigSeedot
	.globl gText_Rom_20F9A0
gText_Rom_20F9A0: @ 0x0820F9A0
	.string "きみ タネボーって ポケモン しってる?\nルネでは めったに みられないん だけどね\pわし おおきな タネボーが\nめちゃめちゃ だいすき なのよ!\pおとうとは ハスボーの ほうが\nおおきいって いうんだけど\pタネボーの ほうが\nおおきいに きまってる よね!\pん? きみ タネボー もってるの?\nちょ ちょ ちょっと……\lおじさんに みせて おくれ!{EOS}"
	.if (. - gText_Rom_20F9A0) > 0xb0
	.error "gText_Rom_20F9A0 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_20F9A0) < 0xb0
	.space 0xb0 - (. - gText_Rom_20F9A0)
	.endif
