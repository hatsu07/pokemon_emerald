	@ data/text/trainers.inc:2771 Route125_Text_KimPostBattle
	.globl gText_Rom_2609BE
gText_Rom_2609BE: @ 0x082609BE
	.string "マホ『あさせのほらあなに\nへんな じいさんが いるんでしょ?\pさっ ナホちゃん あいに いくよ!$"
	.if (. - gText_Rom_2609BE) > 0x31
	.error "gText_Rom_2609BE may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2609BE) < 0x31
	.space 0x31 - (. - gText_Rom_2609BE)
	.endif
