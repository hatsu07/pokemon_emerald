	@ data/text/trainers.inc:1205 Route113_Text_LaoRegister
	.globl gText_Rom_25C78B
gText_Rom_25C78B: @ 0x0825C78B
	.string "やあ! にんぽう\nポケナビ とうろくのじゅつで ござる!{EOS}"
	.if (. - gText_Rom_25C78B) > 0x1d
	.error "gText_Rom_25C78B may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25C78B) < 0x1d
	.space 0x1d - (. - gText_Rom_25C78B)
	.endif
