	@ data/text/apprentice.inc:466 gText_ApprenticeWhatHeldItem15
	.globl gText_Rom_26FF99
gText_Rom_26FF99: @ 0x0826FF99
	.string "ん?\n{PLAYER}{KUN}の ように みえるが……\lほんもの なのかね?\lふたごの きょうだい って ことは?\pあっ いやいや いやいや!\nほんもの なら いいんだ わすれてくれ!\lさらに じょげんを おねがい したい!\pこの わたしの {STR_VAR_1}!\nなにか べんりな どうぐを もたせたい\lいったい どれが ふさわしい かな?"
	.byte EOS
	.if (. - gText_Rom_26FF99) > 0x9c
	.error "gText_Rom_26FF99 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_26FF99) < 0x9c
	.space 0x9c - (. - gText_Rom_26FF99)
	.endif
