	@ data/text/apprentice.inc:457 gText_ApprenticeThanksNoHeldItem14
	.globl gText_Rom_26FEB0
gText_Rom_26FEB0: @ 0x0826FEB0
	.string "よ よし!\nどうぐ なしで いくよ!\pうう てれるな\nかっこ よすぎない かな……?\pありがとう {PLAYER}{KUN}\nまた こんど あえたら…… よろしくね"
	.byte EOS
	.if (. - gText_Rom_26FEB0) > 0x4a
	.error "gText_Rom_26FEB0 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_26FEB0) < 0x4a
	.space 0x4a - (. - gText_Rom_26FEB0)
	.endif
