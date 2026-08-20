	@ data/text/trainers.inc:1163 Route113_Text_JaylenPostBattle
	.globl gText_Rom_25C5F4
gText_Rom_25C5F4: @ 0x0825C5F4
	.string "かざんばいが たいようの ひかりを\nさえぎってるから ひえるんだね!\lあつがりの オレには たすかるよ!{EOS}"
	.if (. - gText_Rom_25C5F4) > 0x35
	.error "gText_Rom_25C5F4 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25C5F4) < 0x35
	.space 0x35 - (. - gText_Rom_25C5F4)
	.endif
