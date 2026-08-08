	@ data/maps/DewfordTown/scripts.inc:672 DewfordTown_Text_GiveYouOneOfMyRods
	.globl gText_Rom_1E5316
gText_Rom_1E5316: @ 0x081E5316
	.string "うんうん うれしいな\nわたしの つりざお わけてあげよう!$"
	.if (. - gText_Rom_1E5316) > 0x1e
	.error "gText_Rom_1E5316 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1E5316) < 0x1e
	.space 0x1e - (. - gText_Rom_1E5316)
	.endif
