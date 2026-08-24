	@ src/strings.c:918 gText_YesNo
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_YesNo
gText_YesNo: @ 0x085D7B40
	.string "はい\nいいえ{EOS}"
	.if (. - gText_YesNo) != 0x7
	.error "gText_YesNo must retain its original byte length"
	.endif
