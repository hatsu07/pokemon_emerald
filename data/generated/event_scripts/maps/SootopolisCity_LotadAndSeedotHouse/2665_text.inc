	@ data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.inc:131 SootopolisCity_LotadAndSeedotHouse_Text_PleaseShowMeBigLotad
	.globl gText_Rom_20FB81
gText_Rom_20FB81: @ 0x0820FB81
	.string "きみ ハスボーって ポケモン しってる?\nルネでは めったに みられないん だけどね\pわし おおきな ハスボーが\nめちゃめちゃ だいすき なのよ!\pアニキは タネボーの ほうが\nおおきいって いうんだけど\pハスボーの ほうが\nおおきいに きまってる よね!\pん? きみ ハスボー もってるの?\nちょ ちょ ちょっと……\lおじさんに みせて おくれ!{EOS}"
	.if (. - gText_Rom_20FB81) > 0xaf
	.error "gText_Rom_20FB81 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_20FB81) < 0xaf
	.space 0xaf - (. - gText_Rom_20FB81)
	.endif
