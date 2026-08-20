	@ data/text/trainers.inc:977 Route111_Text_DaisukeIntro (+1 aliases)
	.globl gText_Rom_25BE2B
gText_Rom_25BE2B: @ 0x0825BE2B
	.string "おのれを きたえるため\nであう にんげん すべてに\lしょうぶを もうしこんでるッス!{EOS}"
	.if (. - gText_Rom_25BE2B) > 0x2b
	.error "gText_Rom_25BE2B may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25BE2B) < 0x2b
	.space 0x2b - (. - gText_Rom_25BE2B)
	.endif
