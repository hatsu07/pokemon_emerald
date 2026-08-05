	@ data/maps/MtPyre_Summit/scripts.inc:437 MtPyre_Summit_Text_Grunt2Intro (+1 aliases)
	.globl gText_Rom_21705A
gText_Rom_21705A: @ 0x0821705A
	.string "おっ ざんねん だったな!\pもうすこし はやく ここにくれば\nあの よわっちょろい マグマだんとの\lしょうぶで すんだ はずなのに\pいまごろ きた おかげで\nつよい オレたちが あいてだぜ!$"
	.if (. - gText_Rom_21705A) > 0x60
	.error "gText_Rom_21705A may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_21705A) < 0x60
	.space 0x60 - (. - gText_Rom_21705A)
	.endif
