	@ data/maps/RustboroCity_Flat2_1F/scripts.inc:18 RustboroCity_Flat2_1F_Text_DevonWorkersLiveHere
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_203FB6
gText_Rom_203FB6: @ 0x08203FB6
	.string "ここには デボン コーポレーションの\nしゃいんの みなさんが すんでるのですよ{EOS}"
	.if (. - gText_Rom_203FB6) != 0x28
	.error "gText_Rom_203FB6 must retain its original byte length"
	.endif
