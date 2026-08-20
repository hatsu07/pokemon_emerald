	@ data/text/trainers.inc:710 Route109_Text_HaileyIntro (+1 aliases)
	.globl gText_Rom_25B2DD
gText_Rom_25B2DD: @ 0x0825B2DD
	.string "およげない から\nおよぐ ふりを してるの!{EOS}"
	.if (. - gText_Rom_25B2DD) > 0x17
	.error "gText_Rom_25B2DD may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25B2DD) < 0x17
	.space 0x17 - (. - gText_Rom_25B2DD)
	.endif
