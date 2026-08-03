	.globl gAssertFileName_Malloc
gAssertFileName_Malloc: @ 0x0829BDF4
	.asciz "../gflib/malloc.c"
	.balign 4, 0

	.globl gAssertExpr_AllocInternal_Failed
gAssertExpr_AllocInternal_Failed: @ 0x0829BE08
	.asciz "0"
	.space 0x2, 0

	.globl gAssertExpr_FreeInternal_PointerNotNull
gAssertExpr_FreeInternal_PointerNotNull: @ 0x0829BE0C
	.asciz "p != NULL"
	.space 0x2, 0

	.globl gAssertExpr_FreeInternal_BlockMagicValid
gAssertExpr_FreeInternal_BlockMagicValid: @ 0x0829BE18
	.asciz "pos->magic_number == MALLOC_SYSTEM_ID"
	.space 0x2, 0

	.globl gAssertExpr_FreeInternal_BlockAllocated
gAssertExpr_FreeInternal_BlockAllocated: @ 0x0829BE40
	.asciz "pos->flag == TRUE"
	.space 0x2, 0

	.globl gAssertExpr_FreeInternal_NextBlockMagicValid
gAssertExpr_FreeInternal_NextBlockMagicValid: @ 0x0829BE54
	.asciz "pos->next->magic_number == MALLOC_SYSTEM_ID"

	.globl gAssertExpr_FreeInternal_PrevBlockMagicValid
gAssertExpr_FreeInternal_PrevBlockMagicValid: @ 0x0829BE80
	.asciz "pos->prev->magic_number == MALLOC_SYSTEM_ID"

