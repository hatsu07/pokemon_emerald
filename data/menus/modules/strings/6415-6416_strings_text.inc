
	@ src/strings.c:805 gText_ThereIsNoBattleRecord
	@ Preserve exact byte length: semantic suffix text pointer.
.Lbatch81_text_start_gText_Rom_5CCB94: @ 0x085CCB94
	.string "げんざい たいせんきろくは ありません{EOS}"
	.if (. - .Lbatch81_text_start_gText_Rom_5CCB94) != 0x14
	.error ".Lbatch81_text_start_gText_Rom_5CCB94 must retain its original byte length"
	.endif
