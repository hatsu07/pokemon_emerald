	@ asm/lilycove_lady.s:947 sub_0818DDA4
	.globl gText_QuizLadyDefaultAnswer
	.globl gText_Rom_5D3D90
gText_QuizLadyDefaultAnswer:
gText_Rom_5D3D90: @ 0x085D3D90
	.string "おねえ{EOS}"
	.if (. - gText_Rom_5D3D90) > 0x4
	.error "gText_Rom_5D3D90 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5D3D90) < 0x4
	.space 0x4 - (. - gText_Rom_5D3D90)
	.endif

	@ asm/lilycove_lady.s:1826 sub_0818E43C
	.globl gText_ContestLadyMonName_Cool
	.globl gText_Rom_5D3D94
gText_ContestLadyMonName_Cool:
gText_Rom_5D3D94: @ 0x085D3D94
	.string "ハンサム{EOS}"
	.if (. - gText_Rom_5D3D94) > 0x5
	.error "gText_Rom_5D3D94 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5D3D94) < 0x5
	.space 0x5 - (. - gText_Rom_5D3D94)
	.endif

	@ asm/lilycove_lady.s:1826 sub_0818E43C
	.globl gText_ContestLadyMonName_Beauty
	.globl gText_Rom_5D3D99
gText_ContestLadyMonName_Beauty:
gText_Rom_5D3D99: @ 0x085D3D99
	.string "ジョバンニ{EOS}"
	.if (. - gText_Rom_5D3D99) > 0x6
	.error "gText_Rom_5D3D99 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5D3D99) < 0x6
	.space 0x6 - (. - gText_Rom_5D3D99)
	.endif

	@ asm/lilycove_lady.s:1826 sub_0818E43C
	.globl gText_ContestLadyMonName_Cute
	.globl gText_Rom_5D3D9F
gText_ContestLadyMonName_Cute:
gText_Rom_5D3D9F: @ 0x085D3D9F
	.string "もあもあ{EOS}"
	.if (. - gText_Rom_5D3D9F) > 0x5
	.error "gText_Rom_5D3D9F may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5D3D9F) < 0x5
	.space 0x5 - (. - gText_Rom_5D3D9F)
	.endif

	@ asm/lilycove_lady.s:1826 sub_0818E43C
	.globl gText_ContestLadyMonName_Smart
	.globl gText_Rom_5D3DA4
gText_ContestLadyMonName_Smart:
gText_Rom_5D3DA4: @ 0x085D3DA4
	.string "てつ{EOS}"
	.if (. - gText_Rom_5D3DA4) > 0x3
	.error "gText_Rom_5D3DA4 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5D3DA4) < 0x3
	.space 0x3 - (. - gText_Rom_5D3DA4)
	.endif

	@ asm/lilycove_lady.s:1826 sub_0818E43C
	.globl gText_ContestLadyMonName_Tough
	.globl gText_Rom_5D3DA7
gText_ContestLadyMonName_Tough:
gText_Rom_5D3DA7: @ 0x085D3DA7
	.string "きんにくん{EOS}"
	.if (. - gText_Rom_5D3DA7) > 0x6
	.error "gText_Rom_5D3DA7 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5D3DA7) < 0x6
	.space 0x6 - (. - gText_Rom_5D3DA7)
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
	.globl gText_Rom_5D3DC4
gText_ContestLadyCategory_Cool:
gText_Rom_5D3DC4: @ 0x085D3DC4
	.string "かっこよ{EOS}"
	.if (. - gText_Rom_5D3DC4) > 0x5
	.error "gText_Rom_5D3DC4 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5D3DC4) < 0x5
	.space 0x5 - (. - gText_Rom_5D3DC4)
	.endif

	@ asm/lilycove_lady.s:1789 sub_0818E3F0
	.globl gText_ContestLadyCategory_Beauty
	.globl gText_Rom_5D3DC9
gText_ContestLadyCategory_Beauty:
gText_Rom_5D3DC9: @ 0x085D3DC9
	.string "うつくし{EOS}"
	.if (. - gText_Rom_5D3DC9) > 0x5
	.error "gText_Rom_5D3DC9 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5D3DC9) < 0x5
	.space 0x5 - (. - gText_Rom_5D3DC9)
	.endif

	@ asm/lilycove_lady.s:1789 sub_0818E3F0
	.globl gText_ContestLadyCategory_Cute
	.globl gText_Rom_5D3DCE
gText_ContestLadyCategory_Cute:
gText_Rom_5D3DCE: @ 0x085D3DCE
	.string "かわい{EOS}"
	.if (. - gText_Rom_5D3DCE) > 0x4
	.error "gText_Rom_5D3DCE may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5D3DCE) < 0x4
	.space 0x4 - (. - gText_Rom_5D3DCE)
	.endif

	@ asm/lilycove_lady.s:1789 sub_0818E3F0
	.globl gText_ContestLadyCategory_Smart
	.globl gText_Rom_5D3DD2
gText_ContestLadyCategory_Smart:
gText_Rom_5D3DD2: @ 0x085D3DD2
	.string "かしこ{EOS}"
	.if (. - gText_Rom_5D3DD2) > 0x4
	.error "gText_Rom_5D3DD2 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5D3DD2) < 0x4
	.space 0x4 - (. - gText_Rom_5D3DD2)
	.endif

	@ asm/lilycove_lady.s:1789 sub_0818E3F0
	.globl gText_ContestLadyCategory_Tough
	.globl gText_Rom_5D3DD6
gText_ContestLadyCategory_Tough:
gText_Rom_5D3DD6: @ 0x085D3DD6
	.string "たくまし{EOS}"
	.if (. - gText_Rom_5D3DD6) > 0x5
	.error "gText_Rom_5D3DD6 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5D3DD6) < 0x5
	.space 0x5 - (. - gText_Rom_5D3DD6)
	.endif
	.align 2, 0
