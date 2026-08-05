	@ data/text/event_ticket_2.inc:13 EventTicket_Text_BrineyLetsSail
	.globl gText_Rom_275CDA
gText_Rom_275CDA: @ 0x08275CDA
	.string "{PLAYER}{KUN} すまなかったね\nこのふねを たよって きて くれたのに……\lもちろん いますぐに しゅっこうだ!\pさあいくぞ!\nかいずに ある しまへ しゅっぱつ!$"
	.if (. - gText_Rom_275CDA) > 0x50
	.error "gText_Rom_275CDA may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_275CDA) < 0x50
	.space 0x50 - (. - gText_Rom_275CDA)
	.endif
