	@ asm/lilycove_lady.s:947 sub_0818DDA4
	.globl gText_QuizLadyDefaultAnswer
gText_QuizLadyDefaultAnswer:
.Lbatch81_text_start_gText_Rom_5D3D90: @ 0x085D3D90
	.string "おねえ{EOS}"
	.if (. - .Lbatch81_text_start_gText_Rom_5D3D90) > 0x4
	.error ".Lbatch81_text_start_gText_Rom_5D3D90 may not grow beyond its original slot"
	.endif
	.if (. - .Lbatch81_text_start_gText_Rom_5D3D90) < 0x4
	.space 0x4 - (. - .Lbatch81_text_start_gText_Rom_5D3D90)
	.endif

	@ asm/lilycove_lady.s:1826 sub_0818E43C
	.globl gText_ContestLadyMonName_Cool
gText_ContestLadyMonName_Cool:
.Lbatch81_text_start_gText_Rom_5D3D94: @ 0x085D3D94
	.string "ハンサム{EOS}"
	.if (. - .Lbatch81_text_start_gText_Rom_5D3D94) > 0x5
	.error ".Lbatch81_text_start_gText_Rom_5D3D94 may not grow beyond its original slot"
	.endif
	.if (. - .Lbatch81_text_start_gText_Rom_5D3D94) < 0x5
	.space 0x5 - (. - .Lbatch81_text_start_gText_Rom_5D3D94)
	.endif

	@ asm/lilycove_lady.s:1826 sub_0818E43C
	.globl gText_ContestLadyMonName_Beauty
gText_ContestLadyMonName_Beauty:
.Lbatch81_text_start_gText_Rom_5D3D99: @ 0x085D3D99
	.string "ジョバンニ{EOS}"
	.if (. - .Lbatch81_text_start_gText_Rom_5D3D99) > 0x6
	.error ".Lbatch81_text_start_gText_Rom_5D3D99 may not grow beyond its original slot"
	.endif
	.if (. - .Lbatch81_text_start_gText_Rom_5D3D99) < 0x6
	.space 0x6 - (. - .Lbatch81_text_start_gText_Rom_5D3D99)
	.endif

	@ asm/lilycove_lady.s:1826 sub_0818E43C
	.globl gText_ContestLadyMonName_Cute
gText_ContestLadyMonName_Cute:
.Lbatch81_text_start_gText_Rom_5D3D9F: @ 0x085D3D9F
	.string "もあもあ{EOS}"
	.if (. - .Lbatch81_text_start_gText_Rom_5D3D9F) > 0x5
	.error ".Lbatch81_text_start_gText_Rom_5D3D9F may not grow beyond its original slot"
	.endif
	.if (. - .Lbatch81_text_start_gText_Rom_5D3D9F) < 0x5
	.space 0x5 - (. - .Lbatch81_text_start_gText_Rom_5D3D9F)
	.endif

	@ asm/lilycove_lady.s:1826 sub_0818E43C
	.globl gText_ContestLadyMonName_Smart
gText_ContestLadyMonName_Smart:
.Lbatch81_text_start_gText_Rom_5D3DA4: @ 0x085D3DA4
	.string "てつ{EOS}"
	.if (. - .Lbatch81_text_start_gText_Rom_5D3DA4) > 0x3
	.error ".Lbatch81_text_start_gText_Rom_5D3DA4 may not grow beyond its original slot"
	.endif
	.if (. - .Lbatch81_text_start_gText_Rom_5D3DA4) < 0x3
	.space 0x3 - (. - .Lbatch81_text_start_gText_Rom_5D3DA4)
	.endif

	@ asm/lilycove_lady.s:1826 sub_0818E43C
	.globl gText_ContestLadyMonName_Tough
gText_ContestLadyMonName_Tough:
.Lbatch81_text_start_gText_Rom_5D3DA7: @ 0x085D3DA7
	.string "きんにくん{EOS}"
	.if (. - .Lbatch81_text_start_gText_Rom_5D3DA7) > 0x6
	.error ".Lbatch81_text_start_gText_Rom_5D3DA7 may not grow beyond its original slot"
	.endif
	.if (. - .Lbatch81_text_start_gText_Rom_5D3DA7) < 0x6
	.space 0x6 - (. - .Lbatch81_text_start_gText_Rom_5D3DA7)
	.endif
	.align 2, 0
	.globl gContestLadyMonNamePointers
gContestLadyMonNamePointers: @ 0x085D3DB0
	.4byte gText_ContestLadyMonName_Cool
	.4byte gText_ContestLadyMonName_Beauty
	.4byte gText_ContestLadyMonName_Cute
	.4byte gText_ContestLadyMonName_Smart
	.4byte gText_ContestLadyMonName_Tough

	@ asm/lilycove_lady.s:1789 sub_0818E3F0
	.globl gText_ContestLadyCategory_Cool
gText_ContestLadyCategory_Cool:
.Lbatch81_text_start_gText_Rom_5D3DC4: @ 0x085D3DC4
	.string "かっこよ{EOS}"
	.if (. - .Lbatch81_text_start_gText_Rom_5D3DC4) > 0x5
	.error ".Lbatch81_text_start_gText_Rom_5D3DC4 may not grow beyond its original slot"
	.endif
	.if (. - .Lbatch81_text_start_gText_Rom_5D3DC4) < 0x5
	.space 0x5 - (. - .Lbatch81_text_start_gText_Rom_5D3DC4)
	.endif

	@ asm/lilycove_lady.s:1789 sub_0818E3F0
	.globl gText_ContestLadyCategory_Beauty
gText_ContestLadyCategory_Beauty:
.Lbatch81_text_start_gText_Rom_5D3DC9: @ 0x085D3DC9
	.string "うつくし{EOS}"
	.if (. - .Lbatch81_text_start_gText_Rom_5D3DC9) > 0x5
	.error ".Lbatch81_text_start_gText_Rom_5D3DC9 may not grow beyond its original slot"
	.endif
	.if (. - .Lbatch81_text_start_gText_Rom_5D3DC9) < 0x5
	.space 0x5 - (. - .Lbatch81_text_start_gText_Rom_5D3DC9)
	.endif

	@ asm/lilycove_lady.s:1789 sub_0818E3F0
	.globl gText_ContestLadyCategory_Cute
gText_ContestLadyCategory_Cute:
.Lbatch81_text_start_gText_Rom_5D3DCE: @ 0x085D3DCE
	.string "かわい{EOS}"
	.if (. - .Lbatch81_text_start_gText_Rom_5D3DCE) > 0x4
	.error ".Lbatch81_text_start_gText_Rom_5D3DCE may not grow beyond its original slot"
	.endif
	.if (. - .Lbatch81_text_start_gText_Rom_5D3DCE) < 0x4
	.space 0x4 - (. - .Lbatch81_text_start_gText_Rom_5D3DCE)
	.endif

	@ asm/lilycove_lady.s:1789 sub_0818E3F0
	.globl gText_ContestLadyCategory_Smart
gText_ContestLadyCategory_Smart:
.Lbatch81_text_start_gText_Rom_5D3DD2: @ 0x085D3DD2
	.string "かしこ{EOS}"
	.if (. - .Lbatch81_text_start_gText_Rom_5D3DD2) > 0x4
	.error ".Lbatch81_text_start_gText_Rom_5D3DD2 may not grow beyond its original slot"
	.endif
	.if (. - .Lbatch81_text_start_gText_Rom_5D3DD2) < 0x4
	.space 0x4 - (. - .Lbatch81_text_start_gText_Rom_5D3DD2)
	.endif

	@ asm/lilycove_lady.s:1789 sub_0818E3F0
	.globl gText_ContestLadyCategory_Tough
gText_ContestLadyCategory_Tough:
.Lbatch81_text_start_gText_Rom_5D3DD6: @ 0x085D3DD6
	.string "たくまし{EOS}"
	.if (. - .Lbatch81_text_start_gText_Rom_5D3DD6) > 0x5
	.error ".Lbatch81_text_start_gText_Rom_5D3DD6 may not grow beyond its original slot"
	.endif
	.if (. - .Lbatch81_text_start_gText_Rom_5D3DD6) < 0x5
	.space 0x5 - (. - .Lbatch81_text_start_gText_Rom_5D3DD6)
	.endif
	.align 2, 0
