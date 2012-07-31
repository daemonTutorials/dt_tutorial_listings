/*
 * Title: Notepad
 * Author: Maik Woehl
 * Version: 0.1
 */
 
class Notepad : public QWidget {
	Q_OBJECT
	
	public:
		Notepad();
		
	private slots:
		void quit();
		
	private:
		QTextEdit *textEdit;
		QPushButton *quitButton;
};

Notepad::Notepad()
{
	textEdit = new QTextEdit;
	quitButton = new QPushButton(tr("Quit"));
	
	connect(quitButton, SIGNAL(clicked()), this, SLOT(quit()));
	
	QVBoxLayout *layout = new QVBoxLayout;
	layout->addWidget(textEdit);
	layout->addWidget(quitButton);
	
	setLayout(layout);
	
	setWindowTitle(tr("Notepad"));
}

