	@ src/strings.c:990 gText_MixingRecords
	.globl gText_MixingRecords
gText_MixingRecords: @ 0x08566CA4
	.string "レコードを まぜています{EOS}"
	.if (. - gText_MixingRecords) > 0xd
	.error "gText_MixingRecords may not grow beyond its original slot"
	.endif
	.if (. - gText_MixingRecords) < 0xd
	.space 0xd - (. - gText_MixingRecords)
	.endif

	@ src/strings.c:991 gText_RecordMixingComplete
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_RecordMixingComplete
gText_RecordMixingComplete: @ 0x08566CB1
	.string "しゅうりょう しました\nおつかれさまでした{EOS}"
	.if (. - gText_RecordMixingComplete) != 0x16
	.error "gText_RecordMixingComplete must retain its original byte length"
	.endif
