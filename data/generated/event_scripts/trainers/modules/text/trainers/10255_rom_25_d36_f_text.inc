	@ data/text/trainers.inc:1493 Route115_Text_CyndyRegister
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_25D36F
gText_Rom_25D36F: @ 0x0825D36F
	.string "いいわ あなたが ここに はいるの\nみとめてあげる!\lそのかわり また あいてを たのむわよ!{EOS}"
	.if (. - gText_Rom_25D36F) != 0x30
	.error "gText_Rom_25D36F must retain its original byte length"
	.endif
