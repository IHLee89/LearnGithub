
// LearnGithubDlg.h: 헤더 파일
//

#pragma once


// CLearnGithubDlg 대화 상자
class CLearnGithubDlg : public CDialogEx
{
// 생성입니다.
public:
	CLearnGithubDlg(CWnd* pParent = nullptr);	// 표준 생성자입니다.

// 대화 상자 데이터입니다.
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_LEARNGITHUB_DIALOG };
#endif

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV 지원입니다.


// 구현입니다.
protected:
	HICON m_hIcon;

	// 생성된 메시지 맵 함수
	virtual BOOL OnInitDialog();
	afx_msg void OnSysCommand(UINT nID, LPARAM lParam);
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnBnClickedMsgBtn();
	CListBox m_event_list;
	afx_msg void OnBnClickedResetBtn();

	int m_nBtnClickCounter = 0;

	int AddNumbers(int n);

	afx_msg void OnBnClickedCntBtn();
	CEdit m_edit_out;

	int CalcSum(int a, int b);	// 더하기
	int CalcSub(int a, int b);	// 빼기
	int CalcMul(int a, int b);	// 곱하기
	int CalcDiv(int a, int b);	// 나누기
	int CalcPow(int a, int b);	// 제곱
};
