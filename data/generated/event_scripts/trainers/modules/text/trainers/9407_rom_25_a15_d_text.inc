	@ data/text/trainers.inc:269 Route104_Text_CindyIntro (+1 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_25A15D
gText_Rom_25A15D: @ 0x0825A15D
	.string "あなたと であったのも なにかの ごえん\nおてあわせを おねがい できるかしら$"
	.if (. - gText_Rom_25A15D) != 0x28
	.error "gText_Rom_25A15D must retain its original byte length"
	.endif
