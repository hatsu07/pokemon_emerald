	@ src/strings.c:876 gJPText_WriteErrorUnableToSaveData
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5CD043
gText_Rom_5CD043: @ 0x085CD043
	.string "かきこみ エラー です\nデータが ほぞん できませんでした$"
	.if (. - gText_Rom_5CD043) != 0x1e
	.error "gText_Rom_5CD043 must retain its original byte length"
	.endif
