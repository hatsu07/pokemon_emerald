	@ data/text/trainers.inc:1691 Route117_Text_IsaacRematchIntro (+1 aliases)
	.globl gText_Rom_25DBAD
gText_Rom_25DBAD: @ 0x0825DBAD
	.string "オレが そだてている ポケモン\nあいかわらず いい かんじ だよ!$"
	.if (. - gText_Rom_25DBAD) > 0x22
	.error "gText_Rom_25DBAD may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25DBAD) < 0x22
	.space 0x22 - (. - gText_Rom_25DBAD)
	.endif
